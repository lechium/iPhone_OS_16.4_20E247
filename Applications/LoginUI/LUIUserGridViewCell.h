//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class CNContact, LKUser, LUIUserAvatarView, NSNumber, NSString, UIActivityIndicatorView, UILabel;

@interface LUIUserGridViewCell : UICollectionViewCell
{
    UILabel *mNameLabel;	// 8 = 0x8
    LUIUserAvatarView *avatarView;	// 16 = 0x10
    LKUser *mUserInfo;	// 24 = 0x18
    CNContact *mContact;	// 32 = 0x20
    _Bool _enableEnglishLocaleNaming;	// 40 = 0x28
    double _avatarAlpha;	// 48 = 0x30
    NSNumber *_classID;	// 56 = 0x38
    UIActivityIndicatorView *_spinner;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000000bc19
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(nonatomic) _Bool enableEnglishLocaleNaming; // @synthesize enableEnglishLocaleNaming=_enableEnglishLocaleNaming;
@property(retain, nonatomic) NSNumber *classID; // @synthesize classID=_classID;
@property(nonatomic) double avatarAlpha; // @synthesize avatarAlpha=_avatarAlpha;
@property(retain, nonatomic) CNContact *contact;
@property(retain, nonatomic) LKUser *userInfo;
- (void)stopProgressAnimation;	// IMP=0x001000000000b9ac
- (void)startProgressAnimation;	// IMP=0x001000000000b94f
- (void)updateImage;	// IMP=0x001000000000b8b6
- (void)updateName;	// IMP=0x001000000000b15b
- (_Bool)_willNameFit:(id)arg1 forFont:(id)arg2;	// IMP=0x001000000000b026
- (_Bool)_willNameFit:(id)arg1;	// IMP=0x001000000000afa1
- (id)_nameForEnglishLocaleWithPersonNameComponents:(id)arg1;	// IMP=0x001000000000adea
- (_Bool)_inEnglishLocale;	// IMP=0x001000000000ad02
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000000acb6
- (void)setAvatarDiameter:(double)arg1;	// IMP=0x001000000000ac1e
- (double)diameterForFrame:(struct CGRect)arg1;	// IMP=0x001000000000aa85
- (void)layoutSubviews;	// IMP=0x001000000000a6fb
- (void)prepareForReuse;	// IMP=0x001000000000a6ae
- (void)commonInit;	// IMP=0x001000000000a454
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000000a3da
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000a38e
- (void)dealloc;	// IMP=0x001000000000a308

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

