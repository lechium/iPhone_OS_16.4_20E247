//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleAccount/AAResponse.h>

@class ICQAppCloudStorage;

@interface INStorageByAppResponse : AAResponse
{
    ICQAppCloudStorage *_appCloudStorage;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000001880b
@property(readonly, nonatomic) ICQAppCloudStorage *appCloudStorage;
- (void)_parseResponseDict;	// IMP=0x00100000000185b0
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;	// IMP=0x0010000000018490

@end

