//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface NGMGFTSignatureFormatter : NSObject
{
    NSData *_signedData;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000085ff
@property(retain, nonatomic) NSData *signedData; // @synthesize signedData=_signedData;
- (id)initWithApplicationData:(id)arg1;	// IMP=0x00000000000084a2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

