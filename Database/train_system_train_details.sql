-- MySQL dump 10.13  Distrib 8.0.19, for Win64 (x86_64)
--
-- Host: 127.0.0.1    Database: train_system
-- ------------------------------------------------------
-- Server version	8.0.19

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `train_details`
--

DROP TABLE IF EXISTS `train_details`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `train_details` (
  `train_id` int NOT NULL AUTO_INCREMENT,
  `train_name` varchar(50) DEFAULT NULL,
  `departure_from` varchar(50) DEFAULT NULL,
  `departure_time` time DEFAULT NULL,
  `arrival_to` varchar(50) DEFAULT NULL,
  `arrival_time` time DEFAULT NULL,
  `ticket_price` int DEFAULT NULL,
  `seats` int DEFAULT NULL,
  PRIMARY KEY (`train_id`)
) ENGINE=InnoDB AUTO_INCREMENT=29 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `train_details`
--

LOCK TABLES `train_details` WRITE;
/*!40000 ALTER TABLE `train_details` DISABLE KEYS */;
INSERT INTO `train_details` VALUES (2,'express train','colombo fort','07:37:00','maradana','07:41:00',10,50),(3,'colombo commuter','colombo fort','08:23:00','maradana','08:28:00',10,50),(4,'colombo commuter','colombo fort','10:36:00','maradana','10:41:00',10,50),(5,'nightmail','maradana','04:00:00','colombo fort','04:05:00',10,50),(6,'colombo commuter','maradana','07:16:00','colombo fort','07:21:00',10,50),(8,'colombo commuter','colonbo fort','08:03:00','avissawella','11:19:00',50,50),(9,' local train','colombo fort','13:05:00',' avissawella','15:39:00',50,100),(10,' local train','colombo fort','19:00:00','homagama','20:05:00',45,100),(11,'colombo commuter','colombo fort','18:30:00','kosgama','20:37:00',40,100),(12,'colombo commuter','colombo fort','13:55:00','padukka','15:24:00',40,100),(13,'colombo commuter','colombo fort','17:40:00','padukka','19:09:00',40,100),(15,'long distance','colombo fort','17:05:00','waga','18:34:00',45,150),(16,'colombo commuter','avissawella','05:10:00','colombo fort','07:27:00',50,150),(17,'colombo commuter','avissawella','05:35:00','colombo fort','07:58:00',50,150),(18,'colombo commuter','avissawella','06:25:00','colombo fort','08:44:00',50,150),(19,'colombo commuter','avissawella','12:35:00','colombo fort','15:24:00',50,150),(20,'colombo commuter','avissawella','15:50:00','colombo fort','18:36:00',50,150),(21,'local train','avissawella','20:15:00','padukka','21:06:00',45,150),(22,'colombo commuter','homagama','20:30:00','colombo fort','21:43:00',45,150),(23,'colombo commuter','padukka','05:40:00','colombo fort','07:04:00',45,150),(24,'colombo commuter','padukka','07:00:00','colombo fort','08:24:00',45,150),(25,'colombo commuter','padukka','15:35:00','colombo fort','16:58:00',45,150),(26,'colombo commuter','padukka','15:35:00','colombo fort','17:10:00',45,150),(27,'colombo commuter','padukka','21:00:00','maradana','22:17:00',45,150),(28,'colombo commuter','waga','06:35:00','colombo fort','07:56:00',45,150);
/*!40000 ALTER TABLE `train_details` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2020-06-11 12:10:41
