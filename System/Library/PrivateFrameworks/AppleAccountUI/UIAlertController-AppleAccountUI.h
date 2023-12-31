//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAlertController.h>

@class NSString;

@interface UIAlertController (AppleAccountUI)
+ (id)alertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 defaultButtonTitle:(id)arg4;	// IMP=0x0010000000062ed6
+ (id)alertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 defaultButtonTitle:(id)arg4 actionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000062d51
+ (id)alertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3;	// IMP=0x0010000000062cbb
+ (id)alertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 actionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000062bc2
- (CDUnknownBlockType)_handlerWithMultiActionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000063029
- (CDUnknownBlockType)_handlerWithSingleActionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000062f90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

