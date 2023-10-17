//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKBrowserCell.h"

@class CKAppInstallation, CKBrowserIconView;

__attribute__((visibility("hidden")))
@interface CKBrowserAppInstallCell : CKBrowserCell
{
    CKAppInstallation *_installation;	// 8 = 0x8
    CKBrowserIconView *_browserIconView;	// 16 = 0x10
}

+ (id)reuseIdentifier;	// IMP=0x006000000059d330
- (void).cxx_destruct;	// IMP=0x000000000059d589
@property(retain, nonatomic) CKBrowserIconView *browserIconView; // @synthesize browserIconView=_browserIconView;
@property(retain, nonatomic) CKAppInstallation *installation; // @synthesize installation=_installation;
- (id)iconView;	// IMP=0x000000000059d33d
- (void)layoutSubviews;	// IMP=0x000000000059d2c1

@end
