//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (BDSAdditions)
- (void)bds_chainUntilNoErrorCompletionSelectorCallsForSelector:(SEL)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x006000000004248d
- (void)bds_chainSuccessAndErrorCompletionSelectorCallsForSelector:(SEL)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00600000000422e6
- (void)bds_traverseBatchesOfSize:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00600000000421df
- (id)bds_arrayByRemovingNSNulls;	// IMP=0x00600000000421cb
- (id)bds_arrayByRemovingNSNullsInvokingBlockForNulls:(CDUnknownBlockType)arg1;	// IMP=0x0060000000042072
- (id)bds_dictionaryUsingPropertyAsKey:(id)arg1;	// IMP=0x0060000000041e4a
@end

