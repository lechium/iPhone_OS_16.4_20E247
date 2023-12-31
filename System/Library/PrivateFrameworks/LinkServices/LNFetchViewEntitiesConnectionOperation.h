//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface LNFetchViewEntitiesConnectionOperation
{
    NSArray *_interactionIDs;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    NSArray *_result;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000085574
@property(retain, nonatomic) NSArray *result; // @synthesize result=_result;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy) NSArray *interactionIDs; // @synthesize interactionIDs=_interactionIDs;
- (void)finishWithError:(id)arg1;	// IMP=0x000000000008541d
- (void)start;	// IMP=0x0000000000085319
- (id)initWithConnectionInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000085302
- (id)initWithConnectionInterface:(id)arg1 interactionIDs:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000008510e

@end

