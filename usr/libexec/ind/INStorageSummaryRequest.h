//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleAccount/AARequest.h>

@class ACAccount;

@interface INStorageSummaryRequest : AARequest
{
    ACAccount *_account;	// 8 = 0x8
}

+ (Class)responseClass;	// IMP=0x0040000000015665
- (void).cxx_destruct;	// IMP=0x00200000000158fb
- (id)urlRequest;	// IMP=0x0010000000015874
- (id)urlString;	// IMP=0x001000000001570f
- (id)init;	// IMP=0x00100000000156e4
- (id)initWithAccount:(id)arg1;	// IMP=0x0010000000015676

@end
