//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSCKRecordMetadataReceiptArchive : NSObject
{
    NSMutableDictionary *_zoneIDToArchivedReceipts;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000004c413
- (void)enumerateArchivedRecordIDsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004c880
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004c85d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004c740
- (void)dealloc;	// IMP=0x000000000004c6fd
- (id)initWithReceiptsToEncode:(id)arg1;	// IMP=0x000000000004c41b

@end
