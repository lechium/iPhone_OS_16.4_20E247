//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIViewServiceViewControllerDeputy
{
}

+ (id)deputyWithViewController:(id)arg1;	// IMP=0x001000000133fdbf
+ (id)XPCInterface;	// IMP=0x001000000133fdb7
- (id)invalidate;	// IMP=0x000000000133fe0f
- (void)__prepareForDisconnectionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000133fdfd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

