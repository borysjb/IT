using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace KoszApp.Data
{
    public class Person
    {
        public string Imie { get; set; }
        public string Nazwisko{ get; set; }
        public string Address { get; set; }
        public DateTime birth { get; set; }
        public int Id { get; set; }
    }
}
