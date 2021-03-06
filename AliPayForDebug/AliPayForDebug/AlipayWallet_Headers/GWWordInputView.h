//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class AUILoadingIndicatorView, GWRemarkView, GWTemplate, NSString, UIButton, UIColor, UIImageView, UILabel, UITextField, WordDetail;
@protocol GWWordInputViewDelegate;

@interface GWWordInputView : UIView <UITextFieldDelegate>
{
    _Bool _stopLoadingPrice;
    _Bool _editButtonIsOffline;
    UIColor *_textColor;
    id <GWWordInputViewDelegate> _delegate;
    NSString *_unicodeInQuery;
    UITextField *_textField;
    UIImageView *_shadowImageView;
    UIButton *_editButton;
    GWRemarkView *_remarkView;
    UILabel *_valueLabel;
    UILabel *_moneyLabel;
    UIView *_backgroundCardView;
    UIImageView *_cardShadowImageView;
    AUILoadingIndicatorView *_loadingViewGold;
    AUILoadingIndicatorView *_loadingView;
    GWTemplate *_template;
    NSString *_prodCode;
    NSString *_price;
    WordDetail *_currentWord;
    WordDetail *_lastWord;
    NSString *_textOfShadowImage;
}

@property(retain, nonatomic) NSString *textOfShadowImage; // @synthesize textOfShadowImage=_textOfShadowImage;
@property(nonatomic) _Bool editButtonIsOffline; // @synthesize editButtonIsOffline=_editButtonIsOffline;
@property(nonatomic) _Bool stopLoadingPrice; // @synthesize stopLoadingPrice=_stopLoadingPrice;
@property(retain, nonatomic) WordDetail *lastWord; // @synthesize lastWord=_lastWord;
@property(retain, nonatomic) WordDetail *currentWord; // @synthesize currentWord=_currentWord;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *prodCode; // @synthesize prodCode=_prodCode;
@property(nonatomic) __weak GWTemplate *template; // @synthesize template=_template;
@property(retain, nonatomic) AUILoadingIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) AUILoadingIndicatorView *loadingViewGold; // @synthesize loadingViewGold=_loadingViewGold;
@property(retain, nonatomic) UIImageView *cardShadowImageView; // @synthesize cardShadowImageView=_cardShadowImageView;
@property(retain, nonatomic) UIView *backgroundCardView; // @synthesize backgroundCardView=_backgroundCardView;
@property(retain, nonatomic) UILabel *moneyLabel; // @synthesize moneyLabel=_moneyLabel;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) GWRemarkView *remarkView; // @synthesize remarkView=_remarkView;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) UIImageView *shadowImageView; // @synthesize shadowImageView=_shadowImageView;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(copy, nonatomic) NSString *unicodeInQuery; // @synthesize unicodeInQuery=_unicodeInQuery;
@property(nonatomic) __weak id <GWWordInputViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)updateShadowImage:(_Bool)arg1;
- (void)changeEditState:(_Bool)arg1;
- (void)inputText:(id)arg1 unicode:(id)arg2;
- (void)inputUnicode:(id)arg1;
- (void)beginEdit;
- (void)textFieldInputChanged:(id)arg1;
- (void)editButtonClicked:(id)arg1;
- (void)removeLoading:(id)arg1;
- (void)showGoldMoney:(_Bool)arg1;
- (void)showGold:(_Bool)arg1;
- (void)showGoldAndMoney;
- (void)stopLoadingIfNeed;
- (void)updateWithPrice:(id)arg1;
- (void)startAlphaAnimate:(id)arg1;
- (void)setText:(id)arg1;
- (void)showTextWithUnicode:(id)arg1 animate:(_Bool)arg2;
- (void)updateFontWithUnicode:(id)arg1;
- (void)updateWithWord:(id)arg1 fromInput:(_Bool)arg2;
- (_Bool)resignFirstResponder;
- (void)showTextColor;
- (void)showBackgroundCard;
- (void)updateWithProdCode:(id)arg1;
- (void)updateWithTemplate:(id)arg1;
- (void)ttfLoaded;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 template:(id)arg2 prodCode:(id)arg3;
@property(readonly, nonatomic) NSString *currentText;
@property(readonly, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

