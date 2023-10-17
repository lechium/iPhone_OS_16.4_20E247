//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProxCardKit/PRXCardContentViewController.h>

@class UIView;

@interface HSPCFixedSizeCenterContentViewController : PRXCardContentViewController
{
    _Bool _pinSides;	// 8 = 0x8
    UIView *_centerContentView;	// 16 = 0x10
    struct CGSize _contentSize;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000054f30
@property(nonatomic) _Bool pinSides; // @synthesize pinSides=_pinSides;
@property(retain, nonatomic) UIView *centerContentView; // @synthesize centerContentView=_centerContentView;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
- (void)viewDidLoad;	// IMP=0x00100000000546e8
- (id)initWithCenterContentView:(id)arg1 size:(struct CGSize)arg2 pinSides:(_Bool)arg3;	// IMP=0x0010000000054642
- (id)initWithCenterContentView:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x001000000005462e
- (id)initWithCenterContentView:(id)arg1;	// IMP=0x0010000000054611

@end
