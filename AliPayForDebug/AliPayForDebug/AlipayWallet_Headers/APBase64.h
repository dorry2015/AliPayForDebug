//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface APBase64 : NSObject
{
}

+ (id)decodeData:(id)arg1;
+ (id)decodeString:(id)arg1;
+ (id)decodeBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)dataByEncodingString:(id)arg1 encoding:(unsigned long long)arg2;
+ (id)dataByEncodingBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)dataByEncodingData:(id)arg1;
+ (id)encodeString:(id)arg1 encoding:(unsigned long long)arg2;
+ (id)encodeBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)encodeData:(id)arg1;

@end

