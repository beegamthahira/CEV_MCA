<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Jewelry Advertisement</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            margin: 0;
            padding: 0;
            background-color: #f4f4f4;
        }
        .ad-container {
            max-width: 1200px;
            margin: 0 auto;
            padding: 20px;
            text-align: center;
            background-color: white;
            border: 2px solid #ddd;
            border-radius: 10px;
            box-shadow: 0 5px 15px rgba(0, 0, 0, 0.1);
        }
        .ad-header {
            color: #b87333;
            font-size: 48px;
            margin-bottom: 20px;
            font-weight: bold;
        }
        .ad-description {
            font-size: 20px;
            color: #333;
            margin-bottom: 40px;
        }
        .jewelry-images {
            display: flex;
            justify-content: center;
            gap: 20px;
        }
        .jewelry-images img {
            width: 300px;
            height: auto;
            border-radius: 10px;
            box-shadow: 0 5px 10px rgba(0, 0, 0, 0.1);
        }
        .cta-button {
            background-color: #b87333;
            color: white;
            padding: 15px 30px;
            text-transform: uppercase;
            font-size: 18px;
            font-weight: bold;
            border: none;
            border-radius: 5px;
            cursor: pointer;
            transition: background-color 0.3s ease;
        }
        .cta-button:hover {
            background-color: #965d25;
        }
    </style>
</head>
<body>
    <div class="ad-container">
        <h1 class="ad-header">Exclusive Jewelry Collection</h1>
        <p class="ad-description">Discover our exquisite range of handcrafted jewelry. Perfect for any occasion, each piece is designed to make you shine. Don’t miss out on our special offers!</p>
        <div class="jewelry-images">
            <img src="https://example.com/necklace.jpg" alt="Necklace">
            <img src="https://example.com/bracelet.jpg" alt="Bracelet">
            <img src="https://example.com/ring.jpg" alt="Ring">
        </div>
        <p><button class="cta-button">Shop Now</button></p>
    </div>
</body>
</html>

