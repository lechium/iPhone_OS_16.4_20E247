//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, AKDevice, UIViewController;

@interface COSTinkerAppStoreAuthHelperContext : NSObject
{
    UIViewController *_presentingViewController;	// 8 = 0x8
    ACAccount *_satelliteAppStoreAccount;	// 16 = 0x10
    AKDevice *_satelliteAKDevice;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000012ffb9
@property(retain, nonatomic) AKDevice *satelliteAKDevice; // @synthesize satelliteAKDevice=_satelliteAKDevice;
@property(retain, nonatomic) ACAccount *satelliteAppStoreAccount; // @synthesize satelliteAppStoreAccount=_satelliteAppStoreAccount;
- (void)setPresentingViewController:(id)arg1;	// IMP=0x001000000012ff72
- (id)presentingViewController;	// IMP=0x001000000012ff5c

@end
