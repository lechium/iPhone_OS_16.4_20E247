//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

__attribute__((visibility("hidden")))
@interface OADLinkedMediaFile
{
    NSURL *mUrl;	// 56 = 0x38
    _Bool mIsExternal;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000314ad7
@property _Bool isExternal; // @synthesize isExternal=mIsExternal;
@property(retain) NSURL *url; // @synthesize url=mUrl;

@end

