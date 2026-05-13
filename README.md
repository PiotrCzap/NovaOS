<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>NovaOS - Official Site</title>
    <style>
        * {
            box-sizing: border-box;
        }

        body {
            background-color: #000;
            color: #fff;
            font-family: 'Segoe UI', Tahoma, Helvetica, Arial, sans-serif;
            margin: 0;
            padding: 0;
            overflow-y: auto;
            min-height: 100vh;
        }

        /* SEKTA GÓRNA (HERO) */
        .hero {
            background: linear-gradient(135deg, #6e00ff 0%, #006aff 50%, #00ccff 100%);
            padding: 60px;
            width: 100%;
            min-height: 550px;
            display: flex;
            flex-direction: column;
        }

        .top-nav {
            display: flex;
            justify-content: flex-end;
            gap: 20px;
            margin-bottom: 50px;
        }

        /* NAPIS NOVA OS Z CIENIEM (ZGODNIE Z image_2d886d.png) */
        .hero-content h1 {
            font-size: clamp(60px, 10vw, 120px);
            margin: 0;
            font-weight: 900;
            text-transform: uppercase;
            color: white;
            text-shadow: 0px 10px 15px rgba(0, 0, 0, 0.4);
            letter-spacing: -2px;
        }

        .hero-content p {
            font-size: 1.3em;
            line-height: 1.4;
            max-width: 700px;
            margin: 15px 0 35px 0;
            font-weight: 600;
        }

        /* PRZYCISKI Z ANIMACJAMI */
        .btn-pill, .btn-main-download {
            background: #00d2ff;
            color: white;
            border: none;
            font-weight: bold;
            cursor: pointer;
            transition: all 0.3s cubic-bezier(0.175, 0.885, 0.32, 1.275);
            outline: none;
        }

        .btn-pill {
            padding: 10px 35px;
            border-radius: 50px;
            font-size: 1.1em;
        }

        .btn-main-download {
            padding: 18px 45px;
            border-radius: 15px;
            font-size: 1.6em;
            display: inline-block;
            box-shadow: 0 4px 10px rgba(0,0,0,0.2);
        }

        /* EFEKTY HOVER */
        .btn-pill:hover, .btn-main-download:hover {
            transform: scale(1.07);
            background: #33e0ff;
            box-shadow: 0 0 25px rgba(0, 210, 255, 0.6);
        }

        /* SEKCJA FEATURES */
        .features-section {
            padding: 60px;
            background-color: #000;
            padding-bottom: 120px;
        }

        .features-border-box {
            border: 2px solid #00d2ff;
            padding: 40px;
            display: flex;
            flex-wrap: wrap;
            gap: 30px;
        }

        .features-title {
            font-size: 80px;
            margin: 0;
            flex: 1;
            min-width: 280px;
            font-weight: 800;
        }

        /* GRID DLA KAFELKÓW */
        .grid-container {
            flex: 2;
            display: grid;
            grid-template-columns: repeat(auto-fit, minmax(280px, 1fr));
            gap: 20px;
        }

        .card {
            background: #111;
            padding: 20px;
            border-radius: 4px;
            transition: 0.3s;
        }

        .card:hover {
            background: #181818;
            transform: translateY(-3px);
        }

        .card h3 {
            margin: 0 0 10px 0;
            font-size: 1.5em;
            background: linear-gradient(90deg, #7000ff, #00d2ff);
            -webkit-background-clip: text;
            -webkit-text-fill-color: transparent;
            font-weight: 800;
        }

        .card p {
            margin: 0;
            font-size: 0.95em;
            color: #ddd;
            line-height: 1.4;
            font-weight: 500;
        }

        /* Pasek przewijania */
        ::-webkit-scrollbar { width: 10px; }
        ::-webkit-scrollbar-track { background: #000; }
        ::-webkit-scrollbar-thumb {
            background: linear-gradient(#7000ff, #00d2ff);
            border-radius: 5px;
        }
    </style>
</head>
<body>

    <header class="hero">
        <nav class="top-nav">
            <button class="btn-pill">Info</button>
            <button class="btn-pill">Download</button>
        </nav>

        <div class="hero-content">
            <h1>NOVA OS</h1>
            <p>NovaOS perfect for you new iconic style interface<br>
            and with NPM - Nova Package Manager you install your apps<br>
            with one click without terminal Try Now</p>
            <button class="btn-main-download">Download</button>
        </div>
    </header>

    <main class="features-section">
        <div class="features-border-box">
            <h2 class="features-title">Features</h2>

            <div class="grid-container">
                <div class="card">
                    <h3>Drivers</h3>
                    <p>In NovaOS all drivers already installed intel amd graphics cards and Nvidia cards drivers too</p>
                </div>
                <div class="card">
                    <h3>Stable</h3>
                    <p>NovaOS very stable for GAMING and Streaming in 1080p or 4K</p>
                </div>
                <div class="card">
                    <h3>Simple installer</h3>
                    <p>NovaOS Installer clean and easy</p>
                </div>
                <div class="card">
                    <h3>Fast and Powerful</h3>
                    <p>You want fast install Any App? use NPM - Nova Package Manager One Click and you install your app</p>
                </div>
                <!-- NOWA KARTA Z TWOJEGO SCREENA -->
                <div class="card">
                    <h3>Pre-installed Apps</h3>
                    <p>Wine, Google Chrome or Any Other Browser you can choose in installer what apps you want to pre-install</p>
                </div>
                <div class="card">
                    <h3>Interface</h3>
                    <p>NovaOS Interface very easy to use and navigate clean and easy</p>
                </div>
            </div>
        </div>
    </main>

</body>
</html>
