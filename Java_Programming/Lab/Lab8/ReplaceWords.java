package Lab8;

import java.io.FileNotFoundException;
import java.io.IOException;
import java.nio.file.*;
import java.util.regex.Pattern;
import java.util.regex.Matcher;

public class ReplaceWords {
    public static void main(String[] args) {
        if (args.length < 1) {
            System.out.println("Usage: java RenameFiles *");
            return;
        }

        Pattern pattern = Pattern.compile("Exercise(\\d+)_(\\d+)");

        for (String filename : args) {
            Path path = Paths.get(filename);
            if (Files.isDirectory(path)) {
                continue;
            }

            try {
                String content = new String(Files.readAllBytes(path));
                StringBuffer sb = new StringBuffer();
                Matcher matcher = pattern.matcher(content);

                // replace words for all matches
                while (matcher.find()) {
                    String i = matcher.group(1);
                    String j = matcher.group(2);
                    // pad a 0 before single digit numbers
                    String paddedI = i.length() == 1 ? "0" + i : i;
                    String paddedJ = j.length() == 1 ? "0" + j : j;
                    String newWord = "Exercise" + paddedI + "_" + paddedJ;
                    matcher.appendReplacement(sb, newWord);
                }

                matcher.appendTail(sb);
                String newContent = sb.toString();

                if (!newContent.equals(content)) {
                    Files.write(path, newContent.getBytes());
                    System.out.println("Updated :" + filename);
                }
            } catch (FileNotFoundException e) {
                System.err.println("Not Found the file " + filename);
            } catch (IOException e) {
                System.err.println("Error when handling file:  " + filename + " - " + e.getMessage());
            }
        }
    }
}
