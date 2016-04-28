# YODA (Your Own Digital Accelerator)
The topic for this YODA project is Hardware Encryption

A very simple yet powerful [XOR cipher](https://en.wikipedia.org/wiki/XOR_cipher) scheme

With a 'key' file containing truly random noise, this encryption is unbreakable even in theory.

The [XOR cipher](https://en.wikipedia.org/wiki/XOR_cipher) is so easy, every computer science student should be able to implement this cipher by heart in a couple of lines! If it is 100% secure and incredibly easy to implement, why isn't the whole world using it?

It is in fact used all over the world albeit as part of more complicated cypher schemes.
The problem with the naïve application of xor is that you lose perfect security if you apply the key too often (more than once).
Also for big files you need to have big keys, to avoid or minimize repetition.

This project contains a very simple Algorithm to mitigate the above limitations.

In the age of the slow Internet connections, exchanging big keys with your trustees was impractical,
unless you provided your friends with the key on physical devices. These days you can just create a key which is a couple of megabytes in size and give it to your communication partners, preferably/necessarily using a secure channel/medium like a CD**.



Here is how it works:

In your Mac, Linux or Windows shell type:

`git clone https://github.com/pannous/xipher.git`

`cd xipher`

`make`

`./bin/random > key`

`./bin/encrypt README.md key > encrypted`

`./bin/decrypt encrypted key > README.yay`


Why don't we just use the existing encryption mechanisms?

Number one: **trust**

Do you really feel secure if you use an encryption scheme which you don't understand?
Even if you have access to the source code: Do you really understand everything that happens in all steps?
Are you sure that there is no backdoor somewhere?

With this project you can be perfectly sure:
Look at the simple source code, understand it and compile yourself.
All you need is a truly a random key.
What if you don't trust the random key generator on your computer?
Just xor the generated key with some other files.
If you combine randomness with noise and chaos, you get almost/practically perfect randomness.

Number two: **fun and insight**

Sometimes the topic of encryption can get overwhelming even for people with mathematical background.
Understanding the XOR operation couldn't be any simpler and writing your own encryption feels very empowering.

Number three: **simplicity**
This scheme is arguably even simpler then the usual ssh-keygen/openssl approach.
You and your friends can start right away with any arbitrary file as key to get reasonable encryption:
`./bin/xor README.md any_random_file > reasonably_encrypted`
`./bin/xor key any_random_file > practically_perfect_key`

Extra: speed
Once the key is generated, the encryption and decryption runs in [linear time](https://en.wikipedia.org/wiki/Time_complexity#Linear_time).


CAUTION: In its current implementation once the master key is stolen* somehow, then all files encrypted with it can be deciphered.
This can easily be mitigated by using several keys, but a better approach is desirable.
If your key is too small or if you are using it too often, you may be reducing security.
However for a key of significant size (i.e. 4GB) it is almost infinitely more likely that the key will get stolen then being reverse-engineered.

NOTE: You can increase security significantly if you xor/encrypt zipped files, as they already contain very little structure!

OUTLOOK: This encryption can also be used locally for your own files, if you put the key on a USB stick. And it can be used in the future for peer-to-peer communication applications.


PS: * Ideally you would have a little offline device which encrypts every file/keystroke that you make before it reaches your computer.

PS3: ** You can even securly share the key over the internet using [perfect forward encryption](https://en.wikipedia.org/wiki/Forward_secrecy#Perfect_forward_secrecy), for example through extensions of [Diffie Hellman](https://github.com/pannous/Diffie-Hellman). If you trust ssh/scp/sftp these might be appropriate as well.
