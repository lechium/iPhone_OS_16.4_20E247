//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LNAction, NSString;

__attribute__((visibility("hidden")))
@interface LNFetchMDMPropertiesConnectionOperation
{
    LNAction *_action;	// 8 = 0x8
    NSString *_accountIdentifier;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000006dc7a
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(readonly, nonatomic) LNAction *action; // @synthesize action=_action;
- (void)finishWithError:(id)arg1;	// IMP=0x000000000006db3c
- (void)start;	// IMP=0x000000000006d9d2
- (id)initWithConnectionInterface:(id)arg1 action:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000006d728

@end

