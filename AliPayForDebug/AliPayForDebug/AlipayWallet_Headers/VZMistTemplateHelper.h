//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VZMistTemplateHelper : NSObject
{
}

+ (id)imageWithColor:(id)arg1 size:(struct CGSize)arg2;
+ (id)resizableImageStretch:(id)arg1 top:(double)arg2 left:(double)arg3 bottom:(double)arg4 right:(double)arg5;
+ (id)resizableImage:(id)arg1 top:(double)arg2 left:(double)arg3 bottom:(double)arg4 right:(double)arg5;
+ (id)imageNamed:(id)arg1;
+ (id)attributedStringFromHtml:(id)arg1;
+ (id)_parseExpression:(id)arg1 mistInstance:(id)arg2;
+ (id)parseExpression:(id)arg1 mistInstance:(id)arg2;
+ (id)parseExpressionsInObject:(id)arg1 mistInstance:(id)arg2;
+ (id)parseExpressionsInTemplate:(id)arg1 mistInstance:(id)arg2;
+ (id)valueForExpression:(id)arg1 inData:(id)arg2;
+ (id)extractValueForExpression:(id)arg1 withContext:(id)arg2;
+ (id)expressionRegex;
+ (id)colorFromString:(id)arg1;
+ (id)colorFromName:(id)arg1;
+ (id)sliceList:(id)arg1 forCount:(unsigned long long)arg2;

@end
