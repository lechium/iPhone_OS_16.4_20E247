//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, SHLLibraryItemMetadata;

@interface SHLLibraryGroup : NSObject
{
    SHLLibraryItemMetadata *_metadata;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSMutableArray *_tracksToSave;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000041a66
- (void).cxx_destruct;	// IMP=0x0020000000041d7a
@property(retain, nonatomic) NSMutableArray *tracksToSave; // @synthesize tracksToSave=_tracksToSave;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) SHLLibraryItemMetadata *metadata; // @synthesize metadata=_metadata;
- (_Bool)validIdentifier:(id)arg1;	// IMP=0x0010000000041d2f
@property(readonly) unsigned long long hash;
- (_Bool)isEqualGroup:(id)arg1;	// IMP=0x0010000000041c5a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000041bf3
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000041bbb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000041b83
- (id)initWithLibraryGroup:(id)arg1;	// IMP=0x0010000000041a6e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000419a3
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000041817
- (void)commonInitWithIdentifier:(id)arg1 metadata:(id)arg2 tracksToSave:(id)arg3;	// IMP=0x00100000000416cd
- (id)_initWithIdentifier:(id)arg1 metadata:(id)arg2 tracksToSave:(id)arg3;	// IMP=0x0010000000041624
- (id)initWithIdentifier:(id)arg1 metadata:(id)arg2;	// IMP=0x001000000004160b
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00100000000415f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

