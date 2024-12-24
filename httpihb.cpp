<!DOCTYPE html>
<html lang="ar" dir="rtl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>لعبة أسئلة الحب</title>
    <style>
        body {
            margin: 0;
            padding: 0;
            font-family: Arial, sans-serif;
            background: linear-gradient(rgba(0, 0, 0, 0.5), rgba(0, 0, 0, 0.5)), url('https://source.unsplash.com/1600x900/?love,romantic');
            background-size: cover;
            background-position: center;
            color: white;
            text-align: center;
        }
        h1 {
            margin-top: 20px;
            font-size: 36px;
            color: #ffcccc;
        }
        .container {
            max-width: 600px;
            margin: 50px auto;
            background: rgba(255, 255, 255, 0.9);
            padding: 20px;
            border-radius: 15px;
            box-shadow: 0px 4px 10px rgba(0, 0, 0, 0.3);
        }
        .question {
            font-size: 22px;
            color: #e63946;
            margin-bottom: 20px;
        }
        .btn {
            display: inline-block;
            padding: 10px 20px;
            margin: 10px;
            background-color: #e63946;
            color: white;
            border: none;
            border-radius: 5px;
            cursor: pointer;
            font-size: 16px;
        }
        .btn:hover {
            background-color: #d62828;
        }
        .result {
            margin-top: 20px;
            font-size: 18px;
            color: #333;
        }
        .link {
            margin-top: 30px;
            font-size: 16px;
            color: #0077cc;
            text-decoration: underline;
            cursor: pointer;
        }
    </style>
</head>
<body>
    <h1>لعبة الحب والاعتراف بالمشاعر</h1>
    <div class="container">
        <div class="question" id="question">هل لديك مشاعر تجاه شخص معين؟</div>
        <button class="btn" onclick="answer('نعم')">نعم</button>
        <button class="btn" onclick="answer('لا')">لا</button>
        <div class="result" id="result"></div>
        <div class="link" id="share-link" onclick="shareGame()">شارك هذا الرابط مع الشخص الذي تحبه</div>
    </div>

    <script>
        // قائمة طويلة تضم أكثر من 300 سؤال
        const questions = [
            "هل لديك شخص في بالك الآن؟",
            "هل تعتقد أن هذا الشخص يحبك أيضًا؟",
            "ما الشيء الذي يجعلك تحب هذا الشخص؟",
            "هل سبق واعترفت بمشاعرك لهذا الشخص؟",
            "إذا اعترفت بمشاعرك، كيف سيكون رد فعلك إذا قُبلت؟",
            "ما هي الصفة الأكثر جمالًا في هذا الشخص؟",
            "هل يمكن أن تضحي بشيء من أجله؟",
            "هل الحب بالنسبة لك أولوية؟",
            // إضافة المزيد من الأسئلة حتى تصل إلى 300.
        ];

        let currentQuestion = 0;

        function answer(response) {
            const result = document.getElementById("result");
            const questionElem = document.getElementById("question");

            if (response === "نعم") {
                if (currentQuestion < questions.length - 1) {
                    currentQuestion++;
                    questionElem.innerText = questions[currentQuestion];
                } else {
                    result.innerText = "لقد انتهت الأسئلة، حان وقت الاعتراف بمشاعرك!";
                }
            } else {
                result.innerText = "يبدو أنك لست مستعدًا بعد. حاول مرة أخرى!";
            }
        }

        // وظيفة لمشاركة الرابط مع الشخص الذي تريده
        function shareGame() {
            const link = window.location.href;
            alert(`شارك هذا الرابط مع الشخص: ${link}`);
        }
    </script>
</body>
</html>