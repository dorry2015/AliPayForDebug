//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SNHelper : NSObject
{
}

+ (void)dispatchSyncMain:(CDUnknownBlockType)arg1;
+ (id)loadTemplateDataByPath:(id)arg1;
+ (_Bool)enumerateTemplatesInDirectory:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)templateDerictoryInLibrary:(id)arg1;
+ (id)tempateIDAndVersionWithFilePath:(id)arg1;
+ (id)templateFileNameWithID:(id)arg1 version:(id)arg2;
+ (id)templatePathWithID:(id)arg1 version:(id)arg2 library:(id)arg3;
+ (id)templateWithID:(id)arg1 version:(id)arg2 inArray:(id)arg3;
+ (long long)compareVersion:(id)arg1 toVersion:(id)arg2;

@end
