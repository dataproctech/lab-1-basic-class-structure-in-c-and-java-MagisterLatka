import java.util.Random;

public class Parrot {
    String[] phrases_ = new String[10];
    int count_, cap_ = 10;
    Random rand = new Random();

    public Parrot(String phrase) {
        phrases_[0] = phrase;
        count_ = 1;
    }

    public void say(int count) {
        for (int i = 0; i < count; i += 1) {
            int chosen = rand.nextInt(count_);
            System.out.println(phrases_[chosen]);
        }
    }

    public void setPhrase(String phrase) {
        if (count_ == cap_) {
            cap_ += 10;
            phrases_ = new String[cap_];
        }
        phrases_[count_] = phrase;
        count_ += 1;
    }

    public static void main(String[] args) {
        Parrot parrot = new Parrot("Hello");
        parrot.say(1);
        parrot.setPhrase("AAAA");
        parrot.setPhrase("BBBB");
        for (int i = 1; i <= 5; i++) {
            parrot.say(i);
        }
    } 
}