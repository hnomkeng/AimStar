#pragma once
#include "..\Language.h"
namespace Lang
{
	inline void SimplifiedChinese()
	{
		Global.Author = u8"CowNow";
		Global.Date = u8"2024/01/19";

		Global.SwitchButton = u8"���ù���";
		Global.FeatureSettings = u8"��ϸ����";

		// ESP
		ESPtext.Toggle = u8"�ܿ���";
		ESPtext.FeatureName = u8" ESP";
		ESPtext.Box = u8"����";
		ESPtext.BoxRounding = u8"Բ�ǻ�:";
		ESPtext.FilledBox = u8"��䷽��";
		ESPtext.FilledAlpha = u8"���͸����";
		ESPtext.Skeleton = u8"����";
		ESPtext.HeadBox = u8"ͷ������";
		ESPtext.EyeRay = u8"���߳���";
		ESPtext.HealthBar = u8"������";
		ESPtext.Weapon = u8"����";
		ESPtext.Distance = u8"����";
		ESPtext.PlayerName = u8"�����";
		ESPtext.SnapLine = u8"����";
		ESPtext.LinePosList = u8"����λ��:";
		ESPtext.VisCheck = u8"���Ӽ��";
		ESPtext.Preview = u8"Ч��Ԥ��";
		ESPtext.CollapseHead = u8"�Ը�����";
		ESPtext.Penis = u8"��ʾţ��";
		ESPtext.PenisLength = u8"ţ�ӳ���";
		ESPtext.PenisSize = u8"ţ�Ӵ�ϸ";
		ESPtext.MultiColor = u8"����ɫ";
		ESPtext.MultiColTip = u8"����Բ�Ƕ�Ϊ0ʱ��ʾ.";
		ESPtext.Outline = u8"������";
		ESPtext.BoxType = u8"������ʽ:";
		ESPtext.HealthNum = u8"��������";
		ESPtext.Ammo = u8"������";

		ESPtext.BoxType_Normal = u8"����";
		ESPtext.BoxType_Edge = u8"��̬";
		ESPtext.BoxType_Corner = u8"�Ľ�";
		ESPtext.LinePos_1 = u8"����";
		ESPtext.LinePos_2 = u8"����";
		ESPtext.LinePos_3 = u8"�ײ�";

		// Aimbot
		AimbotText.Enable = u8"��������";
		AimbotText.FeatureName = u8" ��׼����";
		AimbotText.HotKeyList = u8"�ȼ�        ";
		AimbotText.Toggle = u8"����ģʽ";
		AimbotText.DrawFov = u8"��ʾ��Χ";
		AimbotText.VisCheck = u8"���ɼ�Ŀ��";
		AimbotText.JumpCheck = u8"���ڵ�����";
		AimbotText.FovSlider = u8"FOV: ";
		AimbotText.SmoothSlider = u8"ƽ����: ";
		AimbotText.BoneList = u8"��׼��λ  ";
		AimbotText.Tip = u8"�˹����ڲ˵���ʱ���Ṥ��";

		// Radar
		RadarText.Toggle = u8"��ʾ�״�";
		RadarText.FeatureName = u8" �ⲿ�״�";
		RadarText.StyleList = u8"�״���ʽ";
		RadarText.CustomCheck = u8"�Զ�������";
		RadarText.CrossLine = u8"ʮ����";
		RadarText.SizeSlider = u8"��Ǵ�С:";
		RadarText.ProportionSlider = u8"���ű���:";
		RadarText.RangeSlider = u8"��Χ:";
		RadarText.AlphaSlider = u8"����͸����:";

		// Triggerbot
		TriggerText.Enable = u8"���ð��";
		TriggerText.FeatureName = u8" �Զ����";
		TriggerText.HotKeyList = u8"�ȼ�    ";
		TriggerText.Toggle = u8"���ּ���";
		TriggerText.DelaySlider = u8"�ӳ����:";
		TriggerText.FakeShotSlider = u8"�������ʱ��:";

		// Crosshairs
		CrosshairsText.Toggle = u8"��ʾ׼��";
		CrosshairsText.FeatureName = u8" �ⲿ׼��";
		CrosshairsText.PresetList = u8"Ԥ��";
		CrosshairsText.ColorEditor = u8"׼����ɫ";
		CrosshairsText.Dot = u8"���ĵ�";
		CrosshairsText.DotSizeSlider = u8"���ĵ��С:";
		CrosshairsText.Outline = u8"������";
		CrosshairsText.Crossline = u8"ʮ����";
		CrosshairsText.hLengthSlider = u8"ˮƽ����:";
		CrosshairsText.vLengthSilder = u8"��ֱ����:";
		CrosshairsText.GapSlider = u8"��϶:";
		CrosshairsText.ThicknessSlider = u8"��ϸ:";
		CrosshairsText.tStyle = u8"T��׼��";
		CrosshairsText.Circle = u8"Բ��";
		CrosshairsText.RadiusSlider = u8"Բ���뾶:";
		CrosshairsText.TargetCheck = u8"��׼��ɫ";
		CrosshairsText.TeamCheck = u8"������";

		// Misc
		MiscText.FeatureName = u8" �����";
		MiscText.ThemeList = u8"������ɫ  ";
		MiscText.StyleList = u8"������ʽ";
		MiscText.HeadshotLine = u8"��ͷ��";
		MiscText.SpecCheck = u8"�Թ��߱�������";
		MiscText.NoFlash = u8"�������ⵯ";
		MiscText.FastStop = u8"�Զ���ͣ";
		MiscText.HitSound = u8"������Ч";
		MiscText.bmbTimer = u8"C4��ʱ��";
		MiscText.SpecList = u8"�Թ����б�";
		MiscText.Bhop = u8"����";
		MiscText.Watermark = u8"ˮӡ����";
		MiscText.CheatList = u8"�����б�";
		MiscText.TeamCheck = u8"������";
		MiscText.AntiRecord = u8"ֱ��ģʽ";
		MiscText.LanguageList = u8"����";
		MiscText.MoneyService = u8"�������";
		MiscText.ShowCashSpent = u8"��ʾ����";
		MiscText.EnemySensor = u8"���˷���";
		MiscText.RadarHack = u8"�״�͸��";
		MiscText.FastStop = u8"���ټ�ͣ";
		MiscText.VisCheckDisable = u8"�˹��ܻ���ſ��Ӽ��";

		MiscText.FakeDuck = u8"�ٶ�";

		MiscText.LanguageList = u8"����ѡ��  ";

		// Config Menu
		ConfigText.FeatureName = u8" ��������";
		ConfigText.MyConfigs = u8"�ҵ�����";
		ConfigText.Load = u8"����ѡ��";
		ConfigText.Save = u8"����ѡ��";
		ConfigText.Delete = u8"ɾ��ѡ��";
		ConfigText.Reset = u8"��������";
		ConfigText.Create = u8"��������";
		ConfigText.OpenFolder = u8"���ļ���";
		ConfigText.SeparateLine = u8"�½�����";
		ConfigText.AuthorName = u8"����";
		ConfigText.ConfigName = u8"������";

		// Readme Menu
		ReadMeText.FeatureName = u8" ������Ϣ";
		ReadMeText.LastUpdate = u8"������: ";
		ReadMeText.SourceButton = u8"��Դ����";
		ReadMeText.DiscordButton = u8"����Discord";
		ReadMeText.OffsetsTitle = u8"��ػ�ַ: ";
	}
}