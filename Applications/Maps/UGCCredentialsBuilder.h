//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface UGCCredentialsBuilder : NSObject
{
}

+ (void)fetchCommunityIDWithMUID:(unsigned long long)arg1 identifierHistory:(id)arg2 shouldIncreaseCount:(_Bool)arg3 CompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0040000000585345
+ (void)fetchCommunityIDWithMUID:(unsigned long long)arg1 identifierHistory:(id)arg2 CompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000585323
+ (id)buildICloudUserCredentialsWithError:(id *)arg1;	// IMP=0x0010000000585021
+ (_Bool)isUserLoggedInForICloud;	// IMP=0x0010000000584fdc

@end
