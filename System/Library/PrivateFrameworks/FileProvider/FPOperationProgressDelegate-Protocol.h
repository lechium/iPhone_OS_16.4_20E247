//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FileProvider/NSObject-Protocol.h>

@class FPOperation, NSDictionary, NSError;

@protocol FPOperationProgressDelegate <NSObject>
- (void)operation:(FPOperation *)arg1 didReceiveProgressInfo:(NSDictionary *)arg2 error:(NSError *)arg3;
@end
