//
//  ViewController.swift
//  translate-ios
//
//  Created by 乔禹昂 on 2020/1/17.
//  Copyright © 2020 乔禹昂. All rights reserved.
//

import UIKit
import translate_data

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        InquireKt.inquire(word: "function") { (inquireResult, otherTranslation, relatedWords) in
            NSLog("%@", otherTranslation)
            NSLog("%@", relatedWords)
        }
    }

}
