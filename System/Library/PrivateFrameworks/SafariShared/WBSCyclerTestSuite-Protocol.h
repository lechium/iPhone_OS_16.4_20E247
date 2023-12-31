//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariShared/NSObject-Protocol.h>

@class NSString, WBSCyclerIterationCounter;
@protocol WBSCyclerTestTarget;

@protocol WBSCyclerTestSuite <NSObject>
- (void)runWithTarget:(id <WBSCyclerTestTarget>)arg1 completionHandler:(void (^)(NSError *))arg2;
- (id)init;

@optional
+ (_Bool)setValue:(NSString *)arg1 forConfigurationKey:(NSString *)arg2;
@property(retain, nonatomic) WBSCyclerIterationCounter *iterationCounter;
@property(readonly, nonatomic, getter=isFinished) _Bool finished;
- (void)handleRequest:(NSString *)arg1 withTarget:(id <WBSCyclerTestTarget>)arg2 completionHandler:(void (^)(NSError *))arg3;
- (_Bool)canHandleRequest:(NSString *)arg1;
- (void)tearDown;
- (void)setUp;
@end

