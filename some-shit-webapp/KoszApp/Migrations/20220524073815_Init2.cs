using System;
using Microsoft.EntityFrameworkCore.Migrations;

namespace KoszApp.Migrations
{
    public partial class Init2 : Migration
    {
        protected override void Up(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.AddColumn<string>(
                name: "Address",
                table: "Person",
                type: "TEXT",
                nullable: true);

            migrationBuilder.AddColumn<string>(
                name: "Imie",
                table: "Person",
                type: "TEXT",
                nullable: true);

            migrationBuilder.AddColumn<string>(
                name: "Nazwisko",
                table: "Person",
                type: "TEXT",
                nullable: true);

            migrationBuilder.AddColumn<DateTime>(
                name: "birth",
                table: "Person",
                type: "TEXT",
                nullable: false,
                defaultValue: new DateTime(1, 1, 1, 0, 0, 0, 0, DateTimeKind.Unspecified));
        }

        protected override void Down(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.DropColumn(
                name: "Address",
                table: "Person");

            migrationBuilder.DropColumn(
                name: "Imie",
                table: "Person");

            migrationBuilder.DropColumn(
                name: "Nazwisko",
                table: "Person");

            migrationBuilder.DropColumn(
                name: "birth",
                table: "Person");
        }
    }
}
