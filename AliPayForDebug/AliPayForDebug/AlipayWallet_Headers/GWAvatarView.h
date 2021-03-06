//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GWAvatarViewModel, UIButton, UIImageView, UILabel;

@interface GWAvatarView : UIView
{
    UIImageView *_avatarImageView;
    UIButton *_avatarButton;
    UILabel *_nameLabel;
    UILabel *_remarkLabel;
    GWAvatarViewModel *_viewModel;
}

+ (double)heightWithViewModel:(id)arg1;
@property(retain, nonatomic) GWAvatarViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UILabel *remarkLabel; // @synthesize remarkLabel=_remarkLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIButton *avatarButton; // @synthesize avatarButton=_avatarButton;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (void)reloadWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 viewType:(unsigned long long)arg2;

@end

