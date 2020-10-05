# https://www.facebook.com/KrishAnshuAvinash/posts/1298361467180179
# subscribed by Avinash Upadhyay 

//To generate key

public string GenerateEncryptionKey()
        {
            string EncryptionKey = string.Empty;

            Random Robj = new Random();
            int Rnumber = Robj.Next();
            EncryptionKey = "XYZ" + Convert.ToString(Rnumber);

            return EncryptionKey;
        }
        
        
       // For Encryption:

       public string Encrypt(string clearText, string EncryptionKey)
        {
            byte[]  clearBytes = Encoding.Unicode.GetBytes(clearText);
            using  (Aes encryptor = Aes.Create())
            {
                Rfc2898DeriveBytes pdb = new Rfc2898DeriveBytes(EncryptionKey, new byte[]  { 0x49, 0x76, 0x61, 0x6e, 0x20, 0x4d, 0x65, 0x64, 0x76, 0x65, 0x64, 0x65, 0x76 });
                encryptor.Key = pdb.GetBytes (32);
                encryptor.IV = pdb.GetBytes(16);
                using (MemoryStream ms = new MemoryStream())
                {
                    using (CryptoStream cs = new CryptoStream (ms, encryptor.CreateEncryptor(), CryptoStreamMode.Write))
                    {
                        cs.Write (clearBytes, 0, clearBytes.Length);
                        cs.Close();
                    }
                    clearText = Convert.ToBase64String (ms.ToArray());
                }
            }
            return clearText;
        }
        
     
     
     //For Decryption:


public string Decrypt(string cipherText, string EncryptionKey)
        {            
            byte[]  cipherBytes = Convert.FromBase64String(cipherText);
            using  (Aes encryptor = Aes.Create())
            {
                Rfc2898DeriveBytes pdb = new Rfc2898DeriveBytes(EncryptionKey, new byte[]  { 0x49, 0x76, 0x61, 0x6e, 0x20, 0x4d, 0x65, 0x64, 0x76, 0x65, 0x64, 0x65, 0x76 });
                encryptor.Key = pdb.GetBytes (32);
                encryptor.IV = pdb.GetBytes(16);
                using (MemoryStream ms = new MemoryStream())
                {
                    using (CryptoStream cs = new CryptoStream (ms, encryptor.CreateDecryptor(), CryptoStreamMode.Write))
                    {
                        cs.Write (cipherBytes, 0, cipherBytes.Length);
                        cs.Close();
                    }
                    cipherText = Encoding.Unicode.GetString (ms.ToArray());
                }
            }
            return cipherText;
        }
        
        
        
 //       Usage:

      private void Form1_Load(object sender, EventArgs e)
        {

            string EncryptionKey = GenerateEncryptionKey();

            string Encrypted = Encrypt("PasswordHere", EncryptionKey);
            string Decrypted = Decrypt(Encrypted, EncryptionKey);
        }
