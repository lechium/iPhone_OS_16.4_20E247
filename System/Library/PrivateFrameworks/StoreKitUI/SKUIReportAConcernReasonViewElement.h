//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIViewElement.h"

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface SKUIReportAConcernReasonViewElement : SKUIViewElement
{
    NSNumber *_reasonID;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_uppercaseName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000125ea
@property(readonly, copy, nonatomic) NSString *uppercaseName; // @synthesize uppercaseName=_uppercaseName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSNumber *reasonID; // @synthesize reasonID=_reasonID;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;	// IMP=0x000000000001245c

@end
