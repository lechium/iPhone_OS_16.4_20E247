//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (PhotosUICore)
- (void)px_addObject:(id)arg1 removingFirstObjectIfNeededToKeepMaximumCount:(long long)arg2;	// IMP=0x0090000000934209
- (void)px_addObjectIfNotNil:(id)arg1;	// IMP=0x00900000009341f0
- (void)px_insertObjects:(id)arg1 atIndex:(long long)arg2;	// IMP=0x009000000093415c
- (id)px_popFirstPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00900000009340e8
- (id)px_popRange:(struct _NSRange)arg1;	// IMP=0x009000000093405e
- (id)px_popLast;	// IMP=0x0090000000933fe7
- (id)px_popFirst;	// IMP=0x0090000000933f81
@end
