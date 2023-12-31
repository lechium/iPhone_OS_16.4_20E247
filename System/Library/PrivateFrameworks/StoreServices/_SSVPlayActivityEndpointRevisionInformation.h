//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexSet, NSString;

__attribute__((visibility("hidden")))
@interface _SSVPlayActivityEndpointRevisionInformation : NSObject
{
    NSIndexSet *_additionalPendingRevisionsIndexSet;	// 8 = 0x8
    unsigned long long _currentRevision;	// 16 = 0x10
    NSString *_revisionVersionToken;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000128e06
- (void).cxx_destruct;	// IMP=0x0000000000128e54
@property(copy, nonatomic) NSString *revisionVersionToken; // @synthesize revisionVersionToken=_revisionVersionToken;
@property(nonatomic) unsigned long long currentRevision; // @synthesize currentRevision=_currentRevision;
@property(copy, nonatomic) NSIndexSet *additionalPendingRevisionsIndexSet; // @synthesize additionalPendingRevisionsIndexSet=_additionalPendingRevisionsIndexSet;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000128d92
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000128d0d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000128bbe
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000128b21
- (unsigned long long)hash;	// IMP=0x0000000000128ade

@end

