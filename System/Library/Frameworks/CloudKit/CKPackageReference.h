//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _TtC8CloudKit16PackageReference;

@interface CKPackageReference : NSObject
{
    _TtC8CloudKit16PackageReference *_packageReference;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001542b6
@property(retain, nonatomic) _TtC8CloudKit16PackageReference *packageReference; // @synthesize packageReference=_packageReference;
- (id)fieldName;	// IMP=0x000000000015424b
- (long long)databaseScope;	// IMP=0x0000000000154207
- (id)recordID;	// IMP=0x00000000001541b7
- (id)serializedDataAndError:(id *)arg1;	// IMP=0x0000000000154158
- (id)initWithSerializedData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001540ba
- (id)initWithRecordID:(id)arg1 databaseScope:(long long)arg2 fieldName:(id)arg3;	// IMP=0x0000000000153ff9

@end

