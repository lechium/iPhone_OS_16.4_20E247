//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface SKUIStoreDialogController : NSObject
{
    NSMutableArray *_alerts;	// 8 = 0x8
    NSMutableArray *_dialogs;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000e33f
- (void)_performActionForDialog:(id)arg1 buttonIndex:(long long)arg2;	// IMP=0x000000000000dff6
- (void)alertViewCancel:(id)arg1;	// IMP=0x000000000000df8c
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;	// IMP=0x000000000000ded3
- (void)presentDialog:(id)arg1 fromViewController:(id)arg2;	// IMP=0x000000000000daf3
- (void)presentDialog:(id)arg1;	// IMP=0x000000000000d844
- (id)init;	// IMP=0x000000000000d7cf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
