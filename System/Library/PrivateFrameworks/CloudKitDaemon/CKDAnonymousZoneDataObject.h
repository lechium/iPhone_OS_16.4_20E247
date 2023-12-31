//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface CKDAnonymousZoneDataObject : NSObject
{
    int _changeType;	// 8 = 0x8
    int _deleteType;	// 12 = 0xc
    NSData *_encryptedTupleData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001de043
@property(readonly, nonatomic) int deleteType; // @synthesize deleteType=_deleteType;
@property(readonly, nonatomic) int changeType; // @synthesize changeType=_changeType;
@property(readonly, copy, nonatomic) NSData *encryptedTupleData; // @synthesize encryptedTupleData=_encryptedTupleData;
- (id)initWithEncryptedData:(id)arg1 changeType:(int)arg2 deleteType:(int)arg3;	// IMP=0x00000000001ddf9e
- (id)initWithEncryptedData:(id)arg1;	// IMP=0x00000000001ddf2b

@end

