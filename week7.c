mkdir // make directory => ตามด้วยชื่อ
dir // directory // ดูdirectory
cd // ใช้เปลี่ยน directory
cd /    // เปลี่ยนเป็น root directory
git --version // เช็คเวอร์ชั่นของ git
git init // สร้างไฟล์ .git ขึ้นมา
git status // ตรวจสถานะของไฟล์ ว่ามีไฟล์ไหนเปลี่ยนแปลงมั้ย
git add  // เพิ่มไฟล์ไปใน staging area // เชค status ดูอีกที git status
git add . // แอดทุกไฟล์ใน current directory
git config user.name "" //ตั้งค่าชื่อ ตัวผู้ commit
git config user.email "" // email ผู้ commit
git commit -m "" // commit คือ checkpoit //สามารถสร้างเชคพ้อยได้ ** กันพลาด
// ห้ามลืม -m (ย่อมาจาก massage) ใส่ชื่อ จุดเซฟไป ว่าเราทำอะไรไป แก้อะไรไปบ้างแล้ว
git log --all --decorate --oneline --graph // git log adog ดู checkpointทั้งหมดได้
git remote add // ตามด้วยชื่อ remote // แล้วก็ branch
//git push -u origin master
git checkout <commit-id> //นำ checkpoint มาทำงานได้ ทั้งหมด
git checkout <commit-id> <file-name>//นำ checkpoint มาทำงานได้ แค่ที่ไฟล์นั้น
git push // ส่งไปที่ github
git clone <git-url> // กรณีเปลี่ยนเครื่อง สามารถ นำไฟล์กลับไปทำต่อได้
// https://github.com/Chris-Ch-R/CS113-git101.git