//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSObject, NSString;
@protocol CRLWPTextSpanningObject;

@protocol CRLWPTextSpanningObject <NSObject>
@property(copy, nonatomic) NSString *textAttributeUUIDString;
- (void)resetTextAttributeUUIDString;
- (_Bool)isEquivalentToObject:(NSObject<CRLWPTextSpanningObject> *)arg1;

@optional
- (_Bool)supportsDeepCopyForUndo;
@end

