//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FileProvider/FPUntrashOperation.h>

@class MISSING_TYPE, NSString;

@interface _TtC5Files19DOCUntrashOperation : FPUntrashOperation
{
    MISSING_TYPE *restoreDirectory;	// 8 = 0x8
    MISSING_TYPE *undoManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00400000002063e0
- (id)initWithItems:(id)arg1 restoreDirectory:(id)arg2;	// IMP=0x0010000000206380
- (void)registerUndo;	// IMP=0x0010000000206360
- (id)operationForUndoing;	// IMP=0x0010000000206320
- (id)operationForRedoing;	// IMP=0x0010000000206110
@property(nonatomic, readonly) NSString *actionNameForUndoing;

@end

