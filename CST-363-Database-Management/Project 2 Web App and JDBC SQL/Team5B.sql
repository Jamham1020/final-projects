CREATE DATABASE  IF NOT EXISTS `cst363` /*!40100 DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci */ /*!80016 DEFAULT ENCRYPTION='N' */;
USE `cst363`;
-- MySQL dump 10.13  Distrib 8.0.28, for Win64 (x86_64)
--
-- Host: localhost    Database: cst363
-- ------------------------------------------------------
-- Server version	8.0.28

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
-- Table structure for table `contract`
--

DROP TABLE IF EXISTS `contract`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `contract` (
  `pharmaceuticalcompany` varchar(25) NOT NULL,
  `pharmacyid` int NOT NULL,
  `startdate` date NOT NULL,
  `enddate` date NOT NULL,
  `contracttext` text NOT NULL,
  `supervisor` varchar(25) NOT NULL,
  KEY `pharmaceuticalcompany` (`pharmaceuticalcompany`),
  KEY `pharmacyid` (`pharmacyid`),
  CONSTRAINT `contract_ibfk_1` FOREIGN KEY (`pharmaceuticalcompany`) REFERENCES `pharmeceuticalcompany` (`pharmacompanyname`),
  CONSTRAINT `contract_ibfk_2` FOREIGN KEY (`pharmacyid`) REFERENCES `pharmacy` (`pharmacyid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `contract`
--

LOCK TABLES `contract` WRITE;
/*!40000 ALTER TABLE `contract` DISABLE KEYS */;
/*!40000 ALTER TABLE `contract` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `doctor`
--

DROP TABLE IF EXISTS `doctor`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `doctor` (
  `id` int NOT NULL AUTO_INCREMENT,
  `last_name` varchar(50) NOT NULL,
  `first_name` varchar(50) NOT NULL,
  `practice_since` char(4) DEFAULT NULL,
  `specialty` varchar(25) DEFAULT NULL,
  `ssn` char(11) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `doctor`
--

LOCK TABLES `doctor` WRITE;
/*!40000 ALTER TABLE `doctor` DISABLE KEYS */;
/*!40000 ALTER TABLE `doctor` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `drug`
--

DROP TABLE IF EXISTS `drug`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `drug` (
  `drug_id` int NOT NULL,
  `trade_name` varchar(100) DEFAULT NULL,
  `formula` varchar(200) DEFAULT NULL,
  PRIMARY KEY (`drug_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `drug`
--

LOCK TABLES `drug` WRITE;
/*!40000 ALTER TABLE `drug` DISABLE KEYS */;
INSERT INTO `drug` VALUES (1,'Tylenol with Codeine','acetaminophen and codeine'),(2,'Proair Proventil','albuterol aerosol'),(3,'Accuneb','albuterol HFA'),(4,'Fosamax','alendronate'),(5,'Zyloprim','allopurinol'),(6,'Xanax','alprazolam'),(7,'Elavil','amitriptyline'),(8,'Augmentin','amoxicillin and clavulanate K+'),(9,'Amoxil','amoxicillin'),(10,'Adderall XR','amphetamine and dextroamphetamine XR'),(11,'Tenormin','atenolol'),(12,'Lipitor','atorvastatin'),(13,'Zithromax','azithromycin'),(14,'Lotrel','benazepril and amlodipine'),(15,'Soma','carisoprodol'),(16,'Coreg','carvedilol'),(17,'Omnicef','cefdinir'),(18,'Celebrex','celecoxib'),(19,'Keflex','cephalexin'),(20,'Cipro','ciprofloxacin'),(21,'Celexa','citalopram'),(22,'Klonopin','clonazepam'),(23,'Catapres','clonidine HCl'),(24,'Plavix','clopidogrel'),(25,'Premarin','conjugated estrogens'),(26,'Flexeril','cyclobenzaprine'),(27,'Valium','diazepam'),(28,'Voltaren','diclofenac sodium'),(29,'Yaz','drospirenone and ethinyl estradiol'),(30,'Cymbalta','Duloxetine'),(31,'Vibramycin','doxycycline hyclate'),(32,'Vasotec','enalapril'),(33,'Lexapro','escitalopram'),(34,'Nexium','esomeprazole'),(35,'Zetia','ezetimibe'),(36,'Tricor','fenofibrate'),(37,'Allegra','fexofenadine'),(38,'Diflucan','fluconozole'),(39,'Prozac','fluoxetine HCl'),(40,'Advair','fluticasone and salmeterol inhaler'),(41,'Flonase','fluticasone nasal spray'),(42,'Folic Acid','folic acid'),(43,'Lasix','furosemide'),(44,'Neurontin','gabapentin'),(45,'Amaryl','glimepiride'),(46,'Diabeta','glyburide'),(47,'Glucotrol','glipizide'),(48,'Microzide','hydrochlorothiazide'),(49,'Lortab','hydrocodone and acetaminophen'),(50,'Motrin','ibuprophen'),(51,'Lantus','insulin glargine'),(52,'Imdur','isosorbide mononitrate'),(53,'Prevacid','lansoprazole'),(54,'Levaquin','levofloxacin'),(55,'Levoxl','levothyroxine sodium'),(56,'Zestoretic','lisinopril and hydrochlorothiazide'),(57,'Prinivil','lisinopril'),(58,'Ativan','lorazepam'),(59,'Cozaar','losartan'),(60,'Mevacor','lovastatin'),(61,'Mobic','meloxicam'),(62,'Glucophage','metformin HCl'),(63,'Medrol','methylprednisone'),(64,'Toprol','metoprolol succinate XL'),(65,'Lopressor','metoprolol tartrate'),(66,'Nasonex','mometasone'),(67,'Singulair','montelukast'),(68,'Naprosyn','naproxen'),(69,'Prilosec','omeprazole'),(70,'Percocet','oxycodone and acetaminophen'),(71,'Protonix','pantoprazole'),(72,'Paxil','paroxetine'),(73,'Actos','pioglitazone'),(74,'Klor-Con','potassium Chloride'),(75,'Pravachol','pravastatin'),(76,'Deltasone','prednisone'),(77,'Lyrica','pregabalin'),(78,'Phenergan','promethazine'),(79,'Seroquel','quetiapine'),(80,'Zantac','ranitidine'),(81,'Crestor','rosuvastatin'),(82,'Zoloft','sertraline HCl'),(83,'Viagra','sildenafil HCl'),(84,'Vytorin','simvastatin and ezetimibe'),(85,'Zocor','simvastatin'),(86,'Aldactone','spironolactone'),(87,'Bactrim DS','sulfamethoxazole and trimethoprim DS'),(88,'Flomax','tamsulosin'),(89,'Restoril','temezepam'),(90,'Topamax','topiramate'),(91,'Ultram','tramadol'),(92,'Aristocort','triamcinolone Ace topical'),(93,'Desyrel','trazodone HCl'),(94,'Dyazide','triamterene and hydrochlorothiazide'),(95,'Valtrex','valaciclovir'),(96,'Diovan','valsartan'),(97,'Effexor XR','venlafaxine XR'),(98,'Calan SR','verapamil SR'),(99,'Ambien','zolpidem');
/*!40000 ALTER TABLE `drug` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `filled`
--

DROP TABLE IF EXISTS `filled`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `filled` (
  `datefilled` date NOT NULL,
  `rxid` int NOT NULL,
  `pharmacyid` int NOT NULL,
  KEY `rxid` (`rxid`),
  KEY `pharmacyid` (`pharmacyid`),
  CONSTRAINT `filled_ibfk_1` FOREIGN KEY (`rxid`) REFERENCES `prescription` (`rxid`),
  CONSTRAINT `filled_ibfk_2` FOREIGN KEY (`pharmacyid`) REFERENCES `pharmacy` (`pharmacyid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `filled`
--

LOCK TABLES `filled` WRITE;
/*!40000 ALTER TABLE `filled` DISABLE KEYS */;
/*!40000 ALTER TABLE `filled` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `patient`
--

DROP TABLE IF EXISTS `patient`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `patient` (
  `patientId` int NOT NULL AUTO_INCREMENT,
  `last_name` varchar(50) NOT NULL,
  `first_name` varchar(50) NOT NULL,
  `birthdate` date NOT NULL,
  `ssn` char(11) NOT NULL,
  `street` varchar(100) NOT NULL,
  `city` varchar(50) NOT NULL,
  `state` varchar(50) NOT NULL,
  `zipcode` char(5) NOT NULL,
  `primaryId` int NOT NULL,
  PRIMARY KEY (`patientId`),
  KEY `primaryId` (`primaryId`),
  CONSTRAINT `patient_ibfk_1` FOREIGN KEY (`primaryId`) REFERENCES `doctor` (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `patient`
--

LOCK TABLES `patient` WRITE;
/*!40000 ALTER TABLE `patient` DISABLE KEYS */;
/*!40000 ALTER TABLE `patient` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `pharmacy`
--

DROP TABLE IF EXISTS `pharmacy`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `pharmacy` (
  `pharmacyid` int NOT NULL AUTO_INCREMENT,
  `pharmacyname` varchar(25) NOT NULL,
  `pharmacyaddress` varchar(100) NOT NULL,
  `pharmacynumber` varchar(12) NOT NULL,
  PRIMARY KEY (`pharmacyid`)
) ENGINE=InnoDB AUTO_INCREMENT=11 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `pharmacy`
--

LOCK TABLES `pharmacy` WRITE;
/*!40000 ALTER TABLE `pharmacy` DISABLE KEYS */;
INSERT INTO `pharmacy` VALUES (1,'Wholesale Pharmacy','11111','123-123-1234'),(2,'Waldos Pharmacy','22222','234-24-2345'),(3,'Pillmart','33333','345-345-3456'),(4,'Liquid Market','44444','456-456-4567'),(5,'Bullseye Pharmacy','55555','567-567-5678'),(6,'Medicine Market','66666','678-678-6789'),(7,'MartWal Pharmacy','77777','789-789-7890'),(8,'Prescription Fillers','88888','890-890-8901'),(9,'Bottle Pharmacy','99999','901-901-9012'),(10,'Doctor Market','12121','012-012-0123');
/*!40000 ALTER TABLE `pharmacy` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `pharmeceuticalcompany`
--

DROP TABLE IF EXISTS `pharmeceuticalcompany`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `pharmeceuticalcompany` (
  `pharmacompanyname` varchar(25) NOT NULL,
  `pharmacompanynumber` varchar(12) NOT NULL,
  PRIMARY KEY (`pharmacompanyname`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `pharmeceuticalcompany`
--

LOCK TABLES `pharmeceuticalcompany` WRITE;
/*!40000 ALTER TABLE `pharmeceuticalcompany` DISABLE KEYS */;
/*!40000 ALTER TABLE `pharmeceuticalcompany` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `prescription`
--

DROP TABLE IF EXISTS `prescription`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `prescription` (
  `rxid` int NOT NULL AUTO_INCREMENT,
  `doctorId` int NOT NULL,
  `patientId` int NOT NULL,
  `drugId` int NOT NULL,
  `quantity` int NOT NULL,
  `dateprescribed` date NOT NULL,
  `filled` char(3) DEFAULT 'no',
  PRIMARY KEY (`rxid`),
  KEY `doctorId` (`doctorId`),
  KEY `patientId` (`patientId`),
  KEY `drugId` (`drugId`),
  CONSTRAINT `prescription_ibfk_1` FOREIGN KEY (`doctorId`) REFERENCES `doctor` (`id`),
  CONSTRAINT `prescription_ibfk_2` FOREIGN KEY (`patientId`) REFERENCES `patient` (`patientId`),
  CONSTRAINT `prescription_ibfk_3` FOREIGN KEY (`drugId`) REFERENCES `drug` (`drug_id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `prescription`
--

LOCK TABLES `prescription` WRITE;
/*!40000 ALTER TABLE `prescription` DISABLE KEYS */;
/*!40000 ALTER TABLE `prescription` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `sold`
--

DROP TABLE IF EXISTS `sold`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `sold` (
  `drugid` int NOT NULL,
  `pharmacyid` int NOT NULL,
  `price` decimal(7,2) unsigned NOT NULL,
  KEY `drugid` (`drugid`),
  KEY `pharmacyid` (`pharmacyid`),
  CONSTRAINT `sold_ibfk_1` FOREIGN KEY (`drugid`) REFERENCES `drug` (`drug_id`),
  CONSTRAINT `sold_ibfk_2` FOREIGN KEY (`pharmacyid`) REFERENCES `pharmacy` (`pharmacyid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `sold`
--

LOCK TABLES `sold` WRITE;
/*!40000 ALTER TABLE `sold` DISABLE KEYS */;
/*!40000 ALTER TABLE `sold` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2022-05-31 20:40:57
