//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PADSelfieAnalyzerRequest, PADSelfieAnalyzerResult;

@protocol PADSelfieAnalyzer
@property(readonly, nonatomic) PADSelfieAnalyzerResult *result;
- (void)processRequest:(PADSelfieAnalyzerRequest *)arg1 completion:(void (^)(NSError *))arg2;
@end

