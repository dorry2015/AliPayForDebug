//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CardManagerUtility : NSObject
{
}

+ (id)dictionaryWithJsonString:(id)arg1;
+ (struct CGImage *)imageRefFromBGRABytes:(char *)arg1 imageSize:(struct CGSize)arg2;
+ (id)imageFromBRGABytes:(char *)arg1 imageSize:(struct CGSize)arg2;
+ (id)scaleImage:(id)arg1 toScale:(float)arg2;
+ (id)imageFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
+ (id)getPhoneModel;

@end

