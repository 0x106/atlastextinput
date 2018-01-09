//
//  main.h
//  AtlasTextInput
//
//  Created by Jordan Campbell on 9/01/18.
//  Copyright © 2018 Atlas Innovation. All rights reserved.
//

#ifndef main_h
#define main_h

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface AtlasInputView: UIView<UIKeyInput> {
    NSMutableString* text;
//    UITextAutocorrectionType* autocorrectionType;
    
}
    @property(nonatomic, readonly) BOOL hasText;
    @property(nonatomic) UITextAutocorrectionType autocorrectionType;

    - (instancetype) init;

    - (void) insertText:(NSString *) text;
    - (void) deleteBackward;
    - (void) activate;
    - (NSString*) block;
@end

#endif /* main_h */
