package main

import "fmt"

func main() {
	var pilihan int
	var jumlah float64
	var ulang string

	// Nilai kurs tetap (berdasarkan IDR)
	const USD = 15000.0
	const EUR = 16500.0
	const JPY = 110.0

	ulang = "y"

	for ulang == "y" {
		fmt.Println("=== Aplikasi Konversi Mata Uang ===")
		fmt.Println("1. IDR ke USD")
		fmt.Println("2. IDR ke EUR")
		fmt.Println("3. IDR ke JPY")
		fmt.Print("Pilih menu (1-3): ")
		fmt.Scan(&pilihan)

		if pilihan < 1 || pilihan > 3 {
			fmt.Println("Error: Pilihan menu tidak valid.")
		} else {
			fmt.Print("Masukkan jumlah uang (IDR): ")
			fmt.Scan(&jumlah)

			if jumlah <= 0 {
				fmt.Println("Error: Jumlah uang harus lebih dari 0.")
			} else {
				if pilihan == 1 {
					fmt.Println("Hasil:", jumlah/USD, "USD")
				} else if pilihan == 2 {
					fmt.Println("Hasil:", jumlah/EUR, "EUR")
				} else if pilihan == 3 {
					fmt.Println("Hasil:", jumlah/JPY, "JPY")
				}
			}
		}

		fmt.Print("Ingin konversi lagi? (y/n): ")
		fmt.Scan(&ulang)
	}

	fmt.Println("Program selesai.")
}
