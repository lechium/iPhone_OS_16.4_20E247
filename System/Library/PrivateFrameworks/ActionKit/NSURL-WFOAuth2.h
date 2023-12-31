//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (WFOAuth2)
+ (id)URLWithUnicodeString:(id)arg1;	// IMP=0x00100000003191c9
- (_Bool)wfo_isEqualToRedirectURI:(id)arg1;	// IMP=0x0010000000195661
- (id)wfo_normalizedURLComponents;	// IMP=0x001000000019551a
- (id)wfo_URLByAppendingQueryItems:(id)arg1;	// IMP=0x00100000001953d7
- (id)unicodeHost;	// IMP=0x0010000000318c33
- (id)unicodeAbsoluteString;	// IMP=0x0010000000318c17
- (id)initWithUnicodeString:(id)arg1;	// IMP=0x0010000000318be8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

