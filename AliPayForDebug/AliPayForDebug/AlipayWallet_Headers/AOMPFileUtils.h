//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AOMPFileUtils : NSObject
{
}

+ (id)fileDataWithUsrFilePath:(id)arg1 appId:(id)arg2;
+ (id)getTarPathContentFromDataSource:(id)arg1 tarPath:(id)arg2 keyPath:(id)arg3;
+ (id)getTarPathContentWithContext:(id)arg1 tarPath:(id)arg2 keyPath:(id)arg3;
+ (id)dataToHexStr:(id)arg1;
+ (unsigned long long)getEncodingType:(id)arg1 defaultEncoding:(unsigned long long)arg2;
+ (unsigned long long)getEncodingType:(id)arg1;
+ (id)hexStrToString:(id)arg1;
+ (id)stringToHexStr:(id)arg1;
+ (_Bool)isTarPathInBlackList:(id)arg1;
+ (_Bool)hasDirTraversalWithPath:(id)arg1;
+ (_Bool)canReadWithWithAppId:(id)arg1 path:(id)arg2 context:(id)arg3;
+ (_Bool)canReadWithWithAppId:(id)arg1 path:(id)arg2;
+ (_Bool)canWriteWithWithAppId:(id)arg1 path:(id)arg2;
+ (_Bool)canDealWithFilePath:(id)arg1 appId:(id)arg2;
+ (id)getMapRelationVal:(id)arg1;
+ (id)getImageRequestWithIdentify:(id)arg1;
+ (id)getMediaTempFileAbsolutePath:(id)arg1;
+ (id)getLocalURLWithAppId:(id)arg1 path:(id)arg2 context:(id)arg3;
+ (id)getLocalURLWithAppId:(id)arg1 path:(id)arg2;
+ (id)createUsrUrlWithLocalId:(id)arg1 type:(id)arg2;
+ (_Bool)isUsrUrl:(id)arg1;
+ (id)fileDataWithTempFilePath:(id)arg1 appId:(id)arg2;
+ (id)fileTypeWithApFilePath:(id)arg1 appId:(id)arg2;
+ (id)multimediaDataWithApfilePath:(id)arg1;
+ (id)fileDataWithApFilePath:(id)arg1 protocol:(id)arg2 appId:(id)arg3;
+ (id)fileDataWithApFilePath:(id)arg1 appId:(id)arg2;
+ (float)fileSizeAtPath:(id)arg1;
+ (float)folderSizeAtPath:(id)arg1;
+ (id)getAppTarPathWithContext:(id)arg1;
+ (id)getAppTarPathWithAppId:(id)arg1;
+ (id)getMutilMediaFilePath;
+ (id)getAppTempPathWithAppId:(id)arg1;
+ (id)getAppSavedPathWithAppId:(id)arg1;
+ (id)getAppPathWithAppId:(id)arg1;

@end

