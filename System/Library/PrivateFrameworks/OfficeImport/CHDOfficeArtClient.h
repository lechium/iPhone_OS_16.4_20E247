//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHDAnchor, NSString;

__attribute__((visibility("hidden")))
@interface CHDOfficeArtClient : NSObject
{
    CHDAnchor *mAnchor;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000038dd5c
- (struct CGRect)bounds;	// IMP=0x000000000038dd3e
- (_Bool)hasBounds;	// IMP=0x000000000038dd36
- (void)setAnchor:(id)arg1;	// IMP=0x00000000002311c8
- (id)anchor;	// IMP=0x000000000038dd28

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

