//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CoreMLTrainer : NSObject
{
    NSURL *_modelURL;	// 8 = 0x8
}

+ (void)initialize;	// IMP=0x0010000000001de0
- (void).cxx_destruct;	// IMP=0x00000000000036cd
@property(copy, nonatomic) NSURL *modelURL; // @synthesize modelURL=_modelURL;
- (id)evaluateWithModelURL:(id)arg1 dataSource:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000002275
- (id)processModelURL:(id)arg1;	// IMP=0x0000000000001e2e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

