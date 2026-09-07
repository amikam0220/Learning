package Lab8;

import java.io.FileNotFoundException;
import java.io.IOException;
import java.nio.file.*;

public class RemoveText {
    public static void main(String[] args) {
        if (args.length < 2) {
            System.out.println("Please enter: java RemoveText <target> <filename>.");
            return;
        }

        String target = args[0];
        String filename = args[1];

        try {
            // read the file
            Path path = Paths.get(filename);
            String content = new String(Files.readAllBytes(path));

            // remove the target text
            String newContent = content.replace(target, "");

            // rewrite the modified file
            Files.write(path, newContent.getBytes());

            System.out.println("Finished.");
        } catch (FileNotFoundException e) {
            System.err.println("Not Found the file " + filename);
        } catch (IOException e) {
            System.err.println("Error when reading and writing the file " + e.getMessage());
        }
    }
}
